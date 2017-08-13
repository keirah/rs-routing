let component = ReasonReact.statelessComponent "Home";

let make _children => {
  ...component,
  render: fun _self => {
    <div>
      <h1> (ReasonReact.stringToElement "Home") </h1>
      <a href="#/user"> (ReasonReact.stringToElement "User") </a>
    </div>
  }
};