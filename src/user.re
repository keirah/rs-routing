let component = ReasonReact.statelessComponent "User";

let make _children => {
  ...component,
  render: fun _self => {
    <div>
      <h1> (ReasonReact.stringToElement "User") </h1>
      <a href="#/"> (ReasonReact.stringToElement "Home") </a>
    </div>
  }
};